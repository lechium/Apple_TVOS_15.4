//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVExternalDeviceIconInternal, NSData;

@interface AVExternalDeviceIcon : NSObject
{
    AVExternalDeviceIconInternal *_externalDeviceIcon;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isPrerendered) _Bool prerendered;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (void)dealloc;	// IMP=0x00000000001277a1
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001275f0

@end

