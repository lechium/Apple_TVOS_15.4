//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/PFCloudKitMetric-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitBaseMetric : NSObject <PFCloudKitMetric>
{
    NSString *_containerIdentifier;	// 8 = 0x8
    NSString *_processName;	// 16 = 0x10
}

- (id)description;	// IMP=0x00000000001ea567
@property(readonly, nonatomic) NSDictionary *payload;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x00000000001ea3e7
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x00000000001ea360

@end

