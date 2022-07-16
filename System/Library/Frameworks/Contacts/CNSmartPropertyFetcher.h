//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNKeyDescriptor_Private-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNSmartPropertyFetcher : NSObject <CNKeyDescriptor_Private>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a6b00
- (id)_cn_ignorableKeys;	// IMP=0x00000000000a6b87
- (id)_cn_optionalKeys;	// IMP=0x00000000000a6b6e
- (id)_cn_requiredKeys;	// IMP=0x00000000000a6b55
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a6b4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a6b3d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a6b0e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a6b08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

