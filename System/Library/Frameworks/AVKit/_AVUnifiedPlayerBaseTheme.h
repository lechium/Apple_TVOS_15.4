//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVUnifiedPlayerBaseTheme-Protocol.h>

@class NSString, UIColor;
@protocol AVShadowSettings;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerBaseTheme : NSObject <AVUnifiedPlayerBaseTheme>
{
    UIColor *_fillColor;	// 8 = 0x8
    id <AVShadowSettings> _shadowSettings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000607ed
@property(readonly, nonatomic) id <AVShadowSettings> shadowSettings; // @synthesize shadowSettings=_shadowSettings;
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (id)init;	// IMP=0x00000000000606ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
