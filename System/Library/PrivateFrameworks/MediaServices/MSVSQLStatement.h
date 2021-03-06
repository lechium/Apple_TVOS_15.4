//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MSVSQLStatement : NSObject
{
    struct sqlite3_stmt *_statementHandle;	// 8 = 0x8
}

- (_Bool)bindJSONValue:(id)arg1 toParameterNamed:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002a4f6
- (_Bool)bindJSONValue:(id)arg1 toParameterAtIndex:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000002a247
- (void)bindDateValue:(id)arg1 toParameterNamed:(id)arg2;	// IMP=0x000000000002a0d1
- (void)bindDateValue:(id)arg1 toParameterAtIndex:(long long)arg2;	// IMP=0x0000000000029f99
- (void)bindFloatValue:(float)arg1 toParameterNamed:(id)arg2;	// IMP=0x0000000000029eda
- (void)bindFloatValue:(float)arg1 toParameterAtIndex:(long long)arg2;	// IMP=0x0000000000029e2c
- (void)bindUInt64Value:(unsigned long long)arg1 toParameterNamed:(id)arg2;	// IMP=0x0000000000029d74
- (void)bindUInt64Value:(unsigned long long)arg1 toParameterAtIndex:(long long)arg2;	// IMP=0x0000000000029cce
- (void)bindBoolValue:(_Bool)arg1 toParameterNamed:(id)arg2;	// IMP=0x0000000000029be9
- (void)bindBoolValue:(_Bool)arg1 toParameterAtIndex:(long long)arg2;	// IMP=0x0000000000029b4a
- (void)bindDataValue:(id)arg1 toParameterNamed:(id)arg2;	// IMP=0x00000000000299d4
- (void)bindDataValue:(id)arg1 toParameterAtIndex:(long long)arg2;	// IMP=0x000000000002986b
- (void)bindStringValue:(id)arg1 toParameterNamed:(id)arg2;	// IMP=0x00000000000296f5
- (void)bindStringValue:(id)arg1 toParameterAtIndex:(long long)arg2;	// IMP=0x000000000002958d
- (void)bindDoubleValue:(double)arg1 toParameterNamed:(id)arg2;	// IMP=0x00000000000294a2
- (void)bindDoubleValue:(double)arg1 toParameterAtIndex:(long long)arg2;	// IMP=0x00000000000293fd
- (void)bindInt64Value:(long long)arg1 toParameterNamed:(id)arg2;	// IMP=0x0000000000029319
- (void)bindInt64Value:(long long)arg1 toParameterAtIndex:(long long)arg2;	// IMP=0x000000000002927b
- (void)bindNullValueToParameterNamed:(id)arg1;	// IMP=0x000000000002919d
- (void)bindNullValueToParameterAtIndex:(long long)arg1;	// IMP=0x0000000000029108
- (void)reset;	// IMP=0x0000000000029071
- (void)invalidate;	// IMP=0x000000000002904b
- (id)description;	// IMP=0x0000000000028faa
- (void)dealloc;	// IMP=0x0000000000028f6c

@end

