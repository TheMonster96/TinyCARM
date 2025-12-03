const std = @import("std");
const eql= std.mem.eql;

const Tokens= enum{
    C_UNKNOWN, //probably some kind of error
    C_INTTYPE,
    C_ASSIGN,
    C_IDENTIFIER,
    C_CONSTANT,
};

const Token= struct{
    type: Tokens,
};

pub fn stringIsNumber(string: []const u8) bool{
    
    var condition: bool= false;
    for(string) |s| {
        if( s >= 48 and s <= 57 )
        {
            condition = true;
        }
        else {
            return false;
        }
    }

    return condition; 
}

//Experimental for now, will be corrected and optimized later on
pub fn checkTokenType(token: *Token, string: []const u8) void {
        
    std.debug.print("passed string {s}\n", .{string});
    if(eql(u8, string, "int")){
        token.*.type= Tokens.C_INTTYPE;
    }
    else if(eql(u8, string, "=")){
        token.*.type= Tokens.C_ASSIGN;
    }
    else if(stringIsNumber(string)){
        token.*.type= Tokens.C_CONSTANT;
    }
    else {
        token.*.type= Tokens.C_IDENTIFIER;
    }
}

pub fn main() !void {
    const string: []const u8= "int x = 2";
    
    var iterator: std.mem.TokenIterator(u8, .any) = std.mem.tokenizeAny(u8, string, " ");

    while(iterator.next()) |val| {
        
        var newToken: Token= undefined;

        checkTokenType(&newToken, val);

        std.debug.print("{any}\n", .{newToken.type});

    }

    

}
