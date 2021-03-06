//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

@class UNNotificationResponse;

@interface UISNotificationResponseAction : BSAction
{
    UNNotificationResponse *_response;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004d44
@property(readonly, retain, nonatomic) UNNotificationResponse *response; // @synthesize response=_response;
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000004cd8
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000004c9e
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x0000000000004c87
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000004be4
- (long long)UIActionType;	// IMP=0x0000000000004bd9
- (id)_trigger;	// IMP=0x0000000000004b38
@property(readonly, nonatomic) _Bool isDefaultAction;
@property(readonly, nonatomic) _Bool isRemote;
@property(readonly, nonatomic) _Bool isLocal;
- (id)initWithResponse:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004692

@end

