//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNBoxRecordingInfo : NSObject
{
    NSString *_boxName;	// 8 = 0x8
    long long _busIndex;	// 16 = 0x10
    NSString *_fileName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005b9b0
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property long long busIndex; // @synthesize busIndex=_busIndex;
@property(retain) NSString *boxName; // @synthesize boxName=_boxName;

@end

