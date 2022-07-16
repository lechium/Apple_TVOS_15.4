//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/NSExtensionRequestHandling-Protocol.h>
#import <TVServices/TVTopShelfContentProviding-Protocol.h>

@class NSString;

@interface TVTopShelfContentProvider : NSObject <NSExtensionRequestHandling, TVTopShelfContentProviding>
{
}

+ (id)_containingBundleIdentifier;	// IMP=0x00000000000289ff
+ (void)_topShelfContentDidChangeForApplicationBundleIdentifier:(id)arg1;	// IMP=0x0000000000028804
+ (void)topShelfContentDidChange;	// IMP=0x0000000000028743
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x000000000002891e
- (void)loadTopShelfContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000288b9
- (id)init;	// IMP=0x00000000000285f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
