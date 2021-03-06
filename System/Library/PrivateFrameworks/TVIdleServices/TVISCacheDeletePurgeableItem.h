//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSURL;

@interface TVISCacheDeletePurgeableItem : NSObject
{
    NSURL *_url;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    NSDate *_dateCreated;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000349f0
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (unsigned long long)hash;	// IMP=0x00000000000348e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000034840
- (id)description;	// IMP=0x00000000000347d0
- (id)initWithWithURL:(id)arg1 size:(unsigned long long)arg2 dateCreated:(id)arg3;	// IMP=0x00000000000346c0

@end

