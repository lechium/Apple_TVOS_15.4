//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2EncodedAttributeDatabaseResponse-Protocol.h>

@class NSDictionary, NSString;

@interface HAP2EncodedAttributeDatabaseResponseThread <HAP2EncodedAttributeDatabaseResponse>
{
    NSDictionary *_attributeDatabase;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000063f8d
@property(readonly, nonatomic) NSDictionary *attributeDatabase; // @synthesize attributeDatabase=_attributeDatabase;
- (id)initWithBTLEResponse:(id)arg1 attributeDatabase:(id)arg2;	// IMP=0x0000000000063ef1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
