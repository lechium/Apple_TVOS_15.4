//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMGpsOdometerEntry : NSObject
{
    struct CLOdometerEntry gpsOdomEntry;	// 8 = 0x8
}

- (struct CLOdometerEntry)gpsOdomEntry;	// IMP=0x002000000070884a
- (double)dist;	// IMP=0x001000000070883f
- (id)date;	// IMP=0x001000000070881e
- (id)initWithOdometerEntry:(struct CLOdometerEntry)arg1;	// IMP=0x00100000007087cd

@end

