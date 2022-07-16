//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, _UIMotionAnalyzerSettings;

@interface UIMotionEffect : NSObject <NSCopying, NSCoding>
{
    _UIMotionAnalyzerSettings *_preferredMotionAnalyzerSettings;	// 8 = 0x8
    NSString *_animationIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a6a6f9
- (id)_animationIdentifier;	// IMP=0x0000000000a6a66f
- (void)_setPreferredMotionAnalyzerSettings:(id)arg1;	// IMP=0x0000000000a6a624
- (id)_preferredMotionAnalyzerSettings;	// IMP=0x0000000000a6a60e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a6a594
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a6a4ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a6a478
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;	// IMP=0x0000000000a6a447
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;	// IMP=0x0000000000a6a419
- (id)init;	// IMP=0x0000000000a6a356

@end

