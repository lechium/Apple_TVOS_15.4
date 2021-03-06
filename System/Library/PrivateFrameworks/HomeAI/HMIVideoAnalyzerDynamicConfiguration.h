//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HMIVideoAnalyzerDynamicConfiguration : HMFObject <HMFLogging, NSSecureCoding>
{
    _Bool _recognizeFaces;	// 8 = 0x8
    long long _eventTriggers;	// 16 = 0x10
    NSArray *_activityZones;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009db06
+ (id)logCategory;	// IMP=0x000000000009d9cb
- (void).cxx_destruct;	// IMP=0x000000000009de74
@property(retain) NSArray *activityZones; // @synthesize activityZones=_activityZones;
@property long long eventTriggers; // @synthesize eventTriggers=_eventTriggers;
@property _Bool recognizeFaces; // @synthesize recognizeFaces=_recognizeFaces;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009dce7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009db0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009d9d5
- (id)attributeDescriptions;	// IMP=0x000000000009d80a
- (id)init;	// IMP=0x000000000009d798

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

