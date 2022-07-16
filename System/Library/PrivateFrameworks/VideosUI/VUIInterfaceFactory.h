//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VUIDocumentCreator, VUIGroupActivitiesManagerDelegate, VUIOpenURLHandling;

@interface VUIInterfaceFactory : NSObject
{
    struct {
        _Bool respondsToViewControllerCreation;
    } _documentCreatorFlags;	// 8 = 0x8
    NSObject<VUIDocumentCreator> *_documentCreator;	// 16 = 0x10
    NSObject<VUIGroupActivitiesManagerDelegate> *_groupActivitiesManager;	// 24 = 0x18
    NSObject<VUIOpenURLHandling> *_openURLHandler;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000009ea9a
- (void).cxx_destruct;	// IMP=0x000000000009ed4d
@property(retain, nonatomic) NSObject<VUIOpenURLHandling> *openURLHandler; // @synthesize openURLHandler=_openURLHandler;
@property(retain, nonatomic) NSObject<VUIGroupActivitiesManagerDelegate> *groupActivitiesManager; // @synthesize groupActivitiesManager=_groupActivitiesManager;
@property(retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator; // @synthesize documentCreator=_documentCreator;
- (id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 documentOptions:(id)arg3;	// IMP=0x000000000009ec4a
- (id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2;	// IMP=0x000000000009eba1
- (id)rootTabBarViewController;	// IMP=0x000000000009eb51

@end

