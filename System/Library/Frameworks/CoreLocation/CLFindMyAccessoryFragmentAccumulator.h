//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLFindMyAccessoryFragmentAccumulator : NSObject
{
    NSMutableDictionary *_uuidToData;	// 8 = 0x8
    unsigned long long _maxBytesPerUUID;	// 16 = 0x10
}

+ (id)convertDataStatusToString:(unsigned long long)arg1;	// IMP=0x0000000000075387
@property(nonatomic) unsigned long long maxBytesPerUUID; // @synthesize maxBytesPerUUID=_maxBytesPerUUID;
@property(nonatomic) NSMutableDictionary *uuidToData; // @synthesize uuidToData=_uuidToData;
- (id)dataForUUID:(id)arg1;	// IMP=0x0000000000075371
- (_Bool)appendData:(id)arg1 forUUID:(id)arg2;	// IMP=0x000000000007517e
- (unsigned long long)getDataStatusForUUID:(id)arg1;	// IMP=0x0000000000075114
- (_Bool)clearForUUID:(id)arg1;	// IMP=0x00000000000750e5
- (void)dealloc;	// IMP=0x00000000000750aa
- (id)initWithMaxBytesPerUUID:(unsigned long long)arg1;	// IMP=0x0000000000075053

@end

