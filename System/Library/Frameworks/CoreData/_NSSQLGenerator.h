//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSSQLiteAdapter, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : NSObject
{
    NSSQLiteStatement *_statement;	// 8 = 0x8
    NSSQLiteAdapter *_adapter;	// 16 = 0x10
    NSMutableString *_sqlString;	// 24 = 0x18
    NSMutableString *_whereClause;	// 32 = 0x20
    NSMutableString *_selectList;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0000000000055d96
- (void)dealloc;	// IMP=0x0000000000055dd5

@end

