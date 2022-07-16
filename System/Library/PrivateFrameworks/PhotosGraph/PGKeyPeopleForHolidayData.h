//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, PGGraphPersonNode, PGGraphSocialGroupNode;

@interface PGKeyPeopleForHolidayData : NSObject
{
    NSMutableSet *_holidayRules;	// 8 = 0x8
    PGGraphSocialGroupNode *_socialGroupNode;	// 16 = 0x10
    PGGraphPersonNode *_personNode;	// 24 = 0x18
    NSMutableSet *_momentNodes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003be32b
@property(retain, nonatomic) NSMutableSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain, nonatomic) PGGraphPersonNode *personNode; // @synthesize personNode=_personNode;
@property(retain, nonatomic) PGGraphSocialGroupNode *socialGroupNode; // @synthesize socialGroupNode=_socialGroupNode;
@property(retain, nonatomic) NSMutableSet *holidayRules; // @synthesize holidayRules=_holidayRules;
@property(readonly) NSString *uuid;
@property(readonly) double score;
- (id)initWithPersonNode:(id)arg1;	// IMP=0x00000000003be1e7
- (id)initWithSocialGroupNode:(id)arg1;	// IMP=0x00000000003be18d
- (id)init;	// IMP=0x00000000003be118

@end

