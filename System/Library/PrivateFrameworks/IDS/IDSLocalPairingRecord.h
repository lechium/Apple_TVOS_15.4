//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface IDSLocalPairingRecord : NSObject <NSSecureCoding>
{
    NSDictionary *_protectionClassIdentityDataMap;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007f5e8
- (void).cxx_destruct;	// IMP=0x000000000007f60b
@property(retain, nonatomic) NSDictionary *protectionClassIdentityDataMap; // @synthesize protectionClassIdentityDataMap=_protectionClassIdentityDataMap;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007f56f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f46a
- (id)initWithIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3;	// IMP=0x000000000007f376
- (id)identityDataForDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x000000000007f123

@end
