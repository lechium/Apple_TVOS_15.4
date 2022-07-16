//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MRDStreamCapacityManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x004000000001230a
- (id)activeStreams;	// IMP=0x00200000000138ab
- (id)candidateStreams;	// IMP=0x00100000000134ff
@property(readonly, nonatomic) unsigned long long remainingStreamCapacity;
@property(readonly, nonatomic) unsigned long long activeStreamCapacity;
@property(readonly, nonatomic) unsigned long long activeStreamCount;
- (id)description;	// IMP=0x0010000000012d9b
- (id)canActivateStreamWithPlayerPath:(id)arg1;	// IMP=0x001000000001235f

@end

