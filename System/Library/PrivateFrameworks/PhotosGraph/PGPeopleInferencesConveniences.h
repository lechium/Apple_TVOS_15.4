//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGPeopleInferencesConveniences : NSObject
{
}

+ (_Bool)socialGroupNodes:(id)arg1 intersectWithBestSocialGroupsInGraph:(id)arg2;	// IMP=0x0000000000154d10
+ (_Bool)anyPersonNodes:(id)arg1 belongToBestSocialGroupsInGraph:(id)arg2;	// IMP=0x0000000000154c93
+ (id)topPersonNodeIdentifierForTwoPersonSocialGroupsFromPersonNodes:(id)arg1 personNodes:(id)arg2;	// IMP=0x00000000001549f3
+ (id)momentNodesAtHomeInMomentNodes:(id)arg1;	// IMP=0x00000000001548e9
+ (id)momentNodesAtWorkInMomentNodes:(id)arg1;	// IMP=0x00000000001547e1
+ (id)momentNodesByAddressNodeFromMomentNodes:(id)arg1;	// IMP=0x0000000000154722
+ (id)countedPersonNodesFromMomentNodes:(id)arg1 amongPersonNodes:(id)arg2;	// IMP=0x0000000000154516
+ (id)personLocalIdentifierByContactIdentifierFromPersonNodes:(id)arg1;	// IMP=0x000000000015445b
+ (_Bool)signalInRunOptions:(unsigned long long)arg1 signal:(unsigned long long)arg2;	// IMP=0x000000000015444c
+ (_Bool)isValidContact:(id)arg1;	// IMP=0x00000000001543b6

@end
