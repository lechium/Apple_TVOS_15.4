//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface WFContentItemCache : NSObject <NSSecureCoding>
{
    NSMapTable *_cache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ddabc
- (void).cxx_destruct;	// IMP=0x00000000001dd602
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) NSMapTable *cache; // @synthesize cache=_cache;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dd4e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dd46f
- (void)clear;	// IMP=0x00000000001dd3fe
- (id)contentItemForUUID:(id)arg1;	// IMP=0x00000000001dd2c1
- (void)deleteContentCollection:(id)arg1;	// IMP=0x00000000001dd20f
- (void)addContentCollection:(id)arg1;	// IMP=0x00000000001dd15d
- (id)initWithCache:(id)arg1;	// IMP=0x00000000001dd09b
- (id)init;	// IMP=0x00000000001dd041

@end
