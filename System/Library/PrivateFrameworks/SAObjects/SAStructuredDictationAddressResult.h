//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString, NSURL;

@interface SAStructuredDictationAddressResult <SAAceSerializable>
{
}

+ (id)structuredDictationAddressResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f730
+ (id)structuredDictationAddressResult;	// IMP=0x000000000000f71e
@property(copy, nonatomic) NSData *forwardGeoProtobuf;
@property(copy, nonatomic) NSString *contactName;
@property(copy, nonatomic) NSURL *contactId;
@property(copy, nonatomic) NSString *addressLabel;
- (id)encodedClassName;	// IMP=0x000000000000f711
- (id)groupIdentifier;	// IMP=0x000000000000f6fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

