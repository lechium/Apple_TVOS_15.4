//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSSQLUpdateColumnsIntermediate
{
    NSArray *_propertiesToUpdate;	// 16 = 0x10
    NSArray *_valuesToUpdateTo;	// 24 = 0x18
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x00000000000e9ebe
- (id)governingAliasForKeypathExpression:(id)arg1;	// IMP=0x00000000000e9c54
- (_Bool)isUpdateColumnsScoped;	// IMP=0x00000000000e9c4c
- (void)dealloc;	// IMP=0x00000000000e9be1
- (id)initWithProperties:(id)arg1 values:(id)arg2 inScope:(id)arg3;	// IMP=0x00000000000e9b67

@end
