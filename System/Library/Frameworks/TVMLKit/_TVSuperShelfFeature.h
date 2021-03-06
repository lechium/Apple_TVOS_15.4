//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/IKAppBrowser-Protocol.h>

@class NSString, UIViewController, _TVMLBrowserViewController;
@protocol TVBrowserProviding;

__attribute__((visibility("hidden")))
@interface _TVSuperShelfFeature : NSObject <IKAppBrowser>
{
    _TVMLBrowserViewController *_superShelfViewController;	// 8 = 0x8
    UIViewController<TVBrowserProviding> *_provider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ac33a
@property(nonatomic) __weak UIViewController<TVBrowserProviding> *provider; // @synthesize provider=_provider;
- (void)present;	// IMP=0x00000000000ac269
@property(nonatomic) struct UIEdgeInsets maskInset;
@property(nonatomic) double interitemSpacing;
@property(nonatomic) double cornerRadius;
@property(readonly, nonatomic) _TVMLBrowserViewController *superShelfViewController; // @synthesize superShelfViewController=_superShelfViewController;
- (id)initWithProvider:(id)arg1;	// IMP=0x00000000000abf95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

