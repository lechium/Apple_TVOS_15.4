//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNKeyDescriptor-Protocol.h>
#import <Contacts/CNKeyDescriptor_Private-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor>
{
    NSMutableDictionary *_propertiesByIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005348c
- (void).cxx_destruct;	// IMP=0x0000000000053b72
@property(retain, nonatomic) NSMutableDictionary *propertiesByIdentifier; // @synthesize propertiesByIdentifier=_propertiesByIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053afc
- (id)_cn_ignorableKeys;	// IMP=0x0000000000053ae3
- (id)_cn_optionalKeys;	// IMP=0x0000000000053a5b
- (id)_cn_requiredKeys;	// IMP=0x0000000000053a38
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x000000000005386c
- (void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2;	// IMP=0x0000000000053856
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000535ee
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000535cb
- (id)init;	// IMP=0x0000000000053575
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000053494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
