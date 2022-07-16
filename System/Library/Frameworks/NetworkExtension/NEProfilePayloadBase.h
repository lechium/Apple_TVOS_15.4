//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEProfilePayloadBaseDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate>
{
    NSDictionary *_payloadAtom;	// 8 = 0x8
    NSMutableDictionary *_pendingCertificates;	// 16 = 0x10
    NSDictionary *_pluginUpgradeInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000171022
@property(retain) NSDictionary *pluginUpgradeInfo; // @synthesize pluginUpgradeInfo=_pluginUpgradeInfo;
@property(retain) NSMutableDictionary *pendingCertificates; // @synthesize pendingCertificates=_pendingCertificates;
@property(retain, nonatomic) NSDictionary *payloadAtom; // @synthesize payloadAtom=_payloadAtom;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000170edf
- (_Bool)addCertificatePending:(id)arg1 certificateTag:(id)arg2 accessGroup:(id)arg3;	// IMP=0x0000000000170dbd
- (_Bool)addCertificatePending:(id)arg1 certificateTag:(id)arg2;	// IMP=0x0000000000170da8
- (_Bool)setPostprocessedPayloadContents:(id)arg1;	// IMP=0x0000000000170da0
- (id)getPreprocessedPayloadContents;	// IMP=0x0000000000170d98
- (id)validatePayload;	// IMP=0x0000000000170d50
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000000170cfb

@end

