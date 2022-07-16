//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNActionsViewProtocol-Protocol.h>
#import <ContactsUI/CNContactActionsViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIObjectViewController-Protocol.h>

@class CNActionsView, CNContact, CNUIUserActionListDataSource, NSArray, NSDictionary, NSString, UIAlertController, UIView;
@protocol CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate;

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNContactActionsViewControllerDelegate, CNUIObjectViewController>
{
    _Bool _displaysUnavailableActionTypes;	// 8 = 0x8
    _Bool _displaysTitles;	// 9 = 0x9
    id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;	// 16 = 0x10
    CNContact *_contact;	// 24 = 0x18
    NSArray *_supportedActionTypes;	// 32 = 0x20
    double _actionTypesInterspace;	// 40 = 0x28
    long long _viewStyle;	// 48 = 0x30
    id <CNContactInlineActionsViewControllerDelegate> _delegate;	// 56 = 0x38
    NSArray *_actionItems;	// 64 = 0x40
    CNActionsView *_actionsView;	// 72 = 0x48
    NSArray *_tokens;	// 80 = 0x50
    NSDictionary *_defaultActionPerType;	// 88 = 0x58
    UIAlertController *_alertController;	// 96 = 0x60
    CNUIUserActionListDataSource *_actionListDataSource;	// 104 = 0x68
}

+ (_Bool)isEmptyModel:(id)arg1;	// IMP=0x00000000000cd2c5
+ (id)descriptorForRequiredKeys;	// IMP=0x00000000000cca7d
- (void).cxx_destruct;	// IMP=0x00000000000cd7a9
@property(retain, nonatomic) CNUIUserActionListDataSource *actionListDataSource; // @synthesize actionListDataSource=_actionListDataSource;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(copy, nonatomic) NSDictionary *defaultActionPerType; // @synthesize defaultActionPerType=_defaultActionPerType;
@property(copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(nonatomic) __weak CNActionsView *actionsView; // @synthesize actionsView=_actionsView;
@property(copy, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(nonatomic) __weak id <CNContactInlineActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long viewStyle; // @synthesize viewStyle=_viewStyle;
@property(nonatomic) double actionTypesInterspace; // @synthesize actionTypesInterspace=_actionTypesInterspace;
@property(copy, nonatomic) NSArray *supportedActionTypes; // @synthesize supportedActionTypes=_supportedActionTypes;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool displaysTitles; // @synthesize displaysTitles=_displaysTitles;
@property(nonatomic) _Bool displaysUnavailableActionTypes; // @synthesize displaysUnavailableActionTypes=_displaysUnavailableActionTypes;
@property(nonatomic) __weak id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate; // @synthesize objectViewControllerDelegate;
- (void)showDisambiguationFromSourceView:(id)arg1 actionType:(id)arg2;	// IMP=0x00000000000cd607
- (void)performAction:(id)arg1;	// IMP=0x00000000000cd601
- (void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x00000000000cd532
- (void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(_Bool)arg3;	// IMP=0x00000000000cd38e
- (void)reset;	// IMP=0x00000000000cd2d3
- (id)actionItemForType:(id)arg1 defaultAction:(id)arg2;	// IMP=0x00000000000cd2cd
- (void)processModel:(id)arg1 forActionType:(id)arg2;	// IMP=0x00000000000cd2bf
- (void)discoverAvailableActionTypes;	// IMP=0x00000000000cd2b9
- (void)displayAllSupportedTypesDisabled;	// IMP=0x00000000000cd1c4
- (void)displayAdditionalActionItems:(id)arg1;	// IMP=0x00000000000cd0ff
- (void)viewDidLoad;	// IMP=0x00000000000cd06a
- (void)loadView;	// IMP=0x00000000000ccf91
- (void)dealloc;	// IMP=0x00000000000ccb85
- (id)initWithActionListDataSource:(id)arg1;	// IMP=0x00000000000cca93
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000cca85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end
