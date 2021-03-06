//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNKeyDescriptor_Private-Protocol.h>

@class NSArray, NSString;

@interface CNTestSmartFetcher : NSObject <CNKeyDescriptor_Private>
{
    NSArray *_requiredKeys;	// 8 = 0x8
    NSArray *_optionalKeys;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004e130
- (void).cxx_destruct;	// IMP=0x000000000004ea4a
@property(readonly, nonatomic) NSArray *optionalKeys; // @synthesize optionalKeys=_optionalKeys;
@property(readonly, nonatomic) NSArray *requiredKeys; // @synthesize requiredKeys=_requiredKeys;
- (id)_cn_ignorableKeys;	// IMP=0x000000000004ea1d
- (id)_cn_optionalKeys;	// IMP=0x000000000004e9ba
- (id)_cn_requiredKeys;	// IMP=0x000000000004e957
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x000000000004e72c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004e3a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e31d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004e2af
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004e138
- (id)initWithRequiredKeys:(id)arg1 optionalKeys:(id)arg2;	// IMP=0x000000000004e068

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

