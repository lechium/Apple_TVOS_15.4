//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface LaunchEvent
{
    unsigned char _eventSource;	// 8 = 0x8
}

+ (Class)databaseEntityClass;	// IMP=0x00200000001df6ec
@property(nonatomic) unsigned char eventSource; // @synthesize eventSource=_eventSource;
- (id)_humanReadableType;	// IMP=0x00100000001df6fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001df6bd
@property(copy) NSDate *timestamp;
@property(nonatomic, getter=isExtension) _Bool extension;
@property(copy) NSDate *startTime;
@property(copy) NSDate *endTime;
@property(copy) NSString *containingBundleID;
@property(copy) NSString *bundleID;
- (id)diagnosticDescription;	// IMP=0x00100000001df332
- (id)description;	// IMP=0x00100000001defe1
- (id)initWithSourceType:(unsigned char)arg1;	// IMP=0x00100000001def53

@end
