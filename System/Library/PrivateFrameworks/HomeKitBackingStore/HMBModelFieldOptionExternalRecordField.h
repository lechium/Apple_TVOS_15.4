//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBModelFieldOptionExternalRecordField
{
    _Bool _encrypted;	// 8 = 0x8
    NSString *_fieldName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a2007
@property(readonly, nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)applyTo:(id)arg1;	// IMP=0x00000000000a1f57
- (id)initWithExternalRecordField:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x00000000000a1ed7

@end

