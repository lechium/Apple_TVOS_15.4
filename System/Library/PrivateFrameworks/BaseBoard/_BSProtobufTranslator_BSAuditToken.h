//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSProtobufSerializable-Protocol.h>

@class NSData, NSString;

@interface _BSProtobufTranslator_BSAuditToken : NSObject <BSProtobufSerializable>
{
    NSData *_tokenData;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
}

+ (id)protobufSchema;	// IMP=0x000000000007a0c6
- (void).cxx_destruct;	// IMP=0x000000000007a297
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSData *tokenData; // @synthesize tokenData=_tokenData;
- (id)didFinishProtobufDecodingWithError:(out id *)arg1;	// IMP=0x000000000007a212
- (id)initProtobufTranslatorForObject:(id)arg1;	// IMP=0x000000000007a14a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
