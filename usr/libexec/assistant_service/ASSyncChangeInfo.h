//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SADomainObject;

@interface ASSyncChangeInfo : NSObject
{
    _Bool isDelete;	// 8 = 0x8
    SADomainObject *object;	// 16 = 0x10
    NSString *postAnchor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000036f6
@property(nonatomic) _Bool isDelete; // @synthesize isDelete;
@property(copy, nonatomic) NSString *postAnchor; // @synthesize postAnchor;
@property(retain, nonatomic) SADomainObject *object; // @synthesize object;
- (id)description;	// IMP=0x00100000000035ba

@end

