//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAResultCallback <SAAceSerializable>
{
}

+ (id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000378f6
+ (id)resultCallback;	// IMP=0x00000000000378e4
@property(copy, nonatomic) NSArray *commands;
@property(copy, nonatomic) NSArray *commandReferences;
@property(nonatomic) long long code;
- (id)encodedClassName;	// IMP=0x00000000000378d7
- (id)groupIdentifier;	// IMP=0x00000000000378c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

