//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface CBBLEServiceDataInfo : NSObject
{
    unsigned short _serviceUUID16;	// 8 = 0x8
    NSData *_serviceData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002fb60
@property(nonatomic) unsigned short serviceUUID16; // @synthesize serviceUUID16=_serviceUUID16;
@property(copy, nonatomic) NSData *serviceData; // @synthesize serviceData=_serviceData;

@end

