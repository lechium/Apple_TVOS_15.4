//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSString;

@interface AMSAbsinthe : NSObject <AMSBagConsumer>
{
}

+ (id)bagKeySet;	// IMP=0x000000000008504d
+ (void)_signingDataFromRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000008404a
+ (id)_dataToSignFromRequest:(id)arg1 bagDefinition:(id)arg2;	// IMP=0x0000000000083619
+ (id)createBagForSubProfile;	// IMP=0x000000000008357f
+ (id)bagSubProfileVersion;	// IMP=0x0000000000083572
+ (id)bagSubProfile;	// IMP=0x0000000000083565
+ (id)handleResponse:(id)arg1 bag:(id)arg2;	// IMP=0x00000000000832d5
+ (id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3;	// IMP=0x0000000000082de3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
