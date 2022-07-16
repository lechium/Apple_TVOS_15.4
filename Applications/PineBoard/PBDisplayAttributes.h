//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface PBDisplayAttributes : NSObject
{
    NSData *_displayEDID;	// 8 = 0x8
    NSNumber *_productID;	// 16 = 0x10
    NSString *_manufacturer;	// 24 = 0x18
    NSString *_product;	// 32 = 0x20
    NSData *_physicalAddress;	// 40 = 0x28
    NSNumber *_WOM;	// 48 = 0x30
    NSNumber *_YOM;	// 56 = 0x38
    NSNumber *_audioLatencyProgressive;	// 64 = 0x40
    NSNumber *_audioLatencyInterlaced;	// 72 = 0x48
    NSNumber *_videoLatencyProgressive;	// 80 = 0x50
    NSNumber *_videoLatencyInterlaced;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000001bd840
@property(readonly, nonatomic) NSNumber *videoLatencyInterlaced; // @synthesize videoLatencyInterlaced=_videoLatencyInterlaced;
@property(readonly, nonatomic) NSNumber *videoLatencyProgressive; // @synthesize videoLatencyProgressive=_videoLatencyProgressive;
@property(readonly, nonatomic) NSNumber *audioLatencyInterlaced; // @synthesize audioLatencyInterlaced=_audioLatencyInterlaced;
@property(readonly, nonatomic) NSNumber *audioLatencyProgressive; // @synthesize audioLatencyProgressive=_audioLatencyProgressive;
@property(readonly, nonatomic) NSNumber *YOM; // @synthesize YOM=_YOM;
@property(readonly, nonatomic) NSNumber *WOM; // @synthesize WOM=_WOM;
@property(readonly, nonatomic) NSData *physicalAddress; // @synthesize physicalAddress=_physicalAddress;
@property(readonly, nonatomic) NSString *product; // @synthesize product=_product;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSNumber *productID; // @synthesize productID=_productID;
@property(readonly, nonatomic) NSData *displayEDID; // @synthesize displayEDID=_displayEDID;

@end

