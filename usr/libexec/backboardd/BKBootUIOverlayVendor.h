//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKFirstBootDetector;

@interface BKBootUIOverlayVendor : NSObject
{
    BKFirstBootDetector *_firstBootDetector;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000005db9a
- (void).cxx_destruct;	// IMP=0x002000000005db8a
- (id)currentOverlayWithLevel:(float)arg1;	// IMP=0x001000000005d9af
- (id)initWithFirstBootDetector:(id)arg1;	// IMP=0x001000000005d944

@end

