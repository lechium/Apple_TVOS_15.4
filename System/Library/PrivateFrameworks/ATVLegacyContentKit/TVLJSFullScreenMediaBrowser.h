//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/TVOneupViewDataSource-Protocol.h>
#import <ATVLegacyContentKit/TVOneupViewDelegate-Protocol.h>

@class NSArray, NSString, TVLLegacyJSContext, TVOneupView, UIViewController;

@interface TVLJSFullScreenMediaBrowser : NSObject <TVOneupViewDataSource, TVOneupViewDelegate>
{
    TVOneupView *_oneUpView;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    id _jsInfo;	// 24 = 0x18
    TVLLegacyJSContext *_context;	// 32 = 0x20
    UIViewController *_oneUpViewController;	// 40 = 0x28
}

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;	// IMP=0x0000000000090a8f
- (void).cxx_destruct;	// IMP=0x0000000000092ad6
@property(retain, nonatomic) UIViewController *oneUpViewController; // @synthesize oneUpViewController=_oneUpViewController;
@property(readonly, nonatomic) TVLLegacyJSContext *context; // @synthesize context=_context;
@property(retain) id jsInfo; // @synthesize jsInfo=_jsInfo;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (long long)oneupView:(id)arg1 contentModeForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000092a6a
- (id)oneupView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000092732
- (long long)numberOfItemsInOneupView:(id)arg1;	// IMP=0x00000000000926ee
- (void)hide;	// IMP=0x00000000000925ce
- (void)showWithItems:(id)arg1 initialSelection:(long long)arg2;	// IMP=0x00000000000924b2
- (void)updateItemMetadataLiked:(id)arg1 forPhotoWithID:(id)arg2;	// IMP=0x0000000000092062
- (void)updateItemMetadata:(id)arg1 forPhotoWithID:(id)arg2;	// IMP=0x0000000000091e43
- (void)updateItems:(id)arg1 initialSelection:(long long)arg2;	// IMP=0x0000000000091e06
- (void)selectItemAtIndex:(long long)arg1;	// IMP=0x0000000000091dba
@property(readonly, nonatomic) TVOneupView *oneUpView; // @synthesize oneUpView=_oneUpView;
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000090a24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
