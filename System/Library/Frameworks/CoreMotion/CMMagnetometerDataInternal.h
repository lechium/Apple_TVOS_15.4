//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>

@interface CMMagnetometerDataInternal : NSObject <NSCopying>
{
    CDStruct_03942939 fMagneticField;	// 8 = 0x8
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000131875
- (id)initWithMagneticField:(CDStruct_03942939)arg1;	// IMP=0x0000000000131817
- (void)setMagneticField:(CDStruct_03942939)arg1;	// IMP=0x0000000000131808

@end

