//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject
{
    CDUnknownBlockType changeListener;	// 8 = 0x8
    NSMutableArray *deviceList;	// 16 = 0x10
    struct _opaque_pthread_mutex_t listLock;	// 24 = 0x18
}

+ (id)defaultDeviceOfType:(unsigned int)arg1;	// IMP=0x0000000000225dfa
+ (id)newDeviceList;	// IMP=0x0000000000225df2
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (id)deviceList;	// IMP=0x0000000000226415
- (void)notifyDeviceListChanged;	// IMP=0x00000000002260de
- (void)dealloc;	// IMP=0x0000000000226068
- (void)cleanup;	// IMP=0x0000000000226062
- (id)init;	// IMP=0x0000000000225fd5
- (unsigned int)dataSourceControlID;	// IMP=0x0000000000225e06

@end

