//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _BKEventUpdateGeneration : NSObject
{
    unsigned int _remainingUpdateMaskData[30];	// 8 = 0x8
    long long _generationCount;	// 128 = 0x80
    NSMutableArray *_clients;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000048001
- (id)init;	// IMP=0x0010000000047f87

@end
