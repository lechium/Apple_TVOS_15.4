//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/IKDOMFeature-Protocol.h>
#import <VideoSubscriberAccountUI/VSJSMessagePortDelegate-Protocol.h>

@class IKAppContext, NSString;
@protocol VSMessagePortFeatureDelegate;

__attribute__((visibility("hidden")))
@interface VSMessagePortFeature : NSObject <VSJSMessagePortDelegate, IKDOMFeature>
{
    NSString *_featureName;	// 8 = 0x8
    IKAppContext *_appContext;	// 16 = 0x10
    id <VSMessagePortFeatureDelegate> _delegate;	// 24 = 0x18
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;	// IMP=0x000000000002777a
- (void).cxx_destruct;	// IMP=0x0000000000027a45
@property(nonatomic) __weak id <VSMessagePortFeatureDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000000027989
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;	// IMP=0x00000000000278bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

