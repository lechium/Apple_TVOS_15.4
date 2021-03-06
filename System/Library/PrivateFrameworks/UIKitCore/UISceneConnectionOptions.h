//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKShareMetadata, FBSScene, FBSSceneSpecification, NSDictionary, NSSet, NSString, UIApplicationShortcutItem, UNNotificationResponse;

@interface UISceneConnectionOptions : NSObject
{
    NSDictionary *_launchOptionsDictionary;	// 8 = 0x8
    FBSScene *_fbsScene;	// 16 = 0x10
    FBSSceneSpecification *_specification;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011073b5
@property(readonly, nonatomic) __weak FBSSceneSpecification *_specification; // @synthesize _specification;
@property(readonly, nonatomic) __weak FBSScene *_fbsScene; // @synthesize _fbsScene;
@property(readonly, nonatomic) NSDictionary *_launchOptionsDictionary; // @synthesize _launchOptionsDictionary;
- (id)description;	// IMP=0x0000000001107369
@property(readonly, nonatomic) CKShareMetadata *cloudKitShareMetadata; // @dynamic cloudKitShareMetadata;
@property(readonly, nonatomic) UIApplicationShortcutItem *shortcutItem; // @dynamic shortcutItem;
@property(readonly, nonatomic) UNNotificationResponse *notificationResponse; // @dynamic notificationResponse;
@property(readonly, copy, nonatomic) NSSet *userActivities; // @dynamic userActivities;
@property(readonly, nonatomic) NSString *handoffUserActivityType; // @dynamic handoffUserActivityType;
@property(readonly, nonatomic) NSString *sourceApplication; // @dynamic sourceApplication;
@property(readonly, copy, nonatomic) NSSet *URLContexts; // @dynamic URLContexts;
- (id)_initWithConnectionOptionsContext:(id)arg1 fbsScene:(id)arg2 specification:(id)arg3;	// IMP=0x0000000001106d60

@end

