//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface BUDescription : NSObject
{
    NSObject *_object;	// 8 = 0x8
    Class _class;	// 16 = 0x10
    void *_cfType;	// 24 = 0x18
    NSString *_header;	// 32 = 0x20
    NSMutableDictionary *_fields;	// 40 = 0x28
    NSMutableArray *_fieldOrder;	// 48 = 0x30
    unsigned long long _fieldNameWidth;	// 56 = 0x38
    _Bool _commaSeparated;	// 64 = 0x40
}

+ (id)descriptionWithObject:(id)arg1;	// IMP=0x0000000000005111
+ (id)descriptionWithCFType:(void *)arg1 format:(id)arg2;	// IMP=0x0000000000004ff2
+ (id)descriptionWithObject:(id)arg1 format:(id)arg2;	// IMP=0x0000000000004edd
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2;	// IMP=0x0000000000004e79
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;	// IMP=0x0000000000004d66
- (void).cxx_destruct;	// IMP=0x0000000000005bed
@property(readonly, copy, nonatomic) NSString *descriptionString;
- (void)setFieldOptionCommaSeparated;	// IMP=0x000000000000567d
- (void)addSuperDescription;	// IMP=0x00000000000055fe
- (void)addFieldValue:(id)arg1;	// IMP=0x00000000000055e0
- (void)addFieldWithFormat:(id)arg1;	// IMP=0x00000000000054d4
- (void)addField:(id)arg1 format:(id)arg2;	// IMP=0x00000000000053af
- (void)addField:(id)arg1 value:(id)arg2;	// IMP=0x000000000000521b
- (id)p_header;	// IMP=0x000000000000512c
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000004d15
- (id)initWithObject:(id)arg1 format:(id)arg2;	// IMP=0x0000000000004c10
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;	// IMP=0x0000000000004b7a
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 arguments:(struct __va_list_tag [1])arg4;	// IMP=0x0000000000004ad0
- (id)initWithCFType:(void *)arg1 header:(id)arg2;	// IMP=0x0000000000004a4b
- (id)initWithObject:(id)arg1 class:(Class)arg2 header:(id)arg3;	// IMP=0x0000000000004995

@end

