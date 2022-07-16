//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class XBApplicationSnapshot;

@interface XBApplicationSnapshotImage : UIImage
{
    XBApplicationSnapshot *_snapshot;	// 8 = 0x8
    long long _interfaceOrientation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001337a
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (id)description;	// IMP=0x00000000000130f0
- (void)dealloc;	// IMP=0x00000000000130a7
- (id)initWithSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;	// IMP=0x0000000000012f27

@end

