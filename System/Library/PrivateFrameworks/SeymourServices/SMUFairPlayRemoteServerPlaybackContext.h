//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SMUFairPlayRemoteServerPlaybackContext : NSObject
{
    unsigned int _identifier;	// 8 = 0x8
    NSData *_blob;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003101
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSData *blob; // @synthesize blob=_blob;
- (id)initWithBlob:(id)arg1 identifier:(unsigned int)arg2;	// IMP=0x0000000000003070

@end

