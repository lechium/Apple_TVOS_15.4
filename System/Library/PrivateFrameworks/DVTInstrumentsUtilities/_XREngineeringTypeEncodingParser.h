//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _XREngineeringTypeEncodingParser
{
    NSString *_sentinel;	// 56 = 0x38
    long long _bitWidth;	// 64 = 0x40
}

+ (id)_elementNameToKVCMap;	// IMP=0x0000000000013667
+ (id)_elementNameToClassMap;	// IMP=0x0000000000013552
- (void).cxx_destruct;	// IMP=0x0000000000013880
@property(nonatomic) long long bitWidth; // @synthesize bitWidth=_bitWidth;
@property(retain, nonatomic) NSString *sentinel; // @synthesize sentinel=_sentinel;
- (void)_handleCompletion;	// IMP=0x00000000000136cc
- (void)_handleStart;	// IMP=0x00000000000136b7

@end
