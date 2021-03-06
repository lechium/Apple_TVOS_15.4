//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFAutomatorWorkflowMigrationErrorEvent
{
    NSString *_key;	// 8 = 0x8
    NSString *_automatorActionIdentifier;	// 16 = 0x10
    NSString *_errorDescription;	// 24 = 0x18
}

+ (Class)codableEventClass;	// IMP=0x00000000000eb928
- (void).cxx_destruct;	// IMP=0x00000000000eb99f
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(copy, nonatomic) NSString *automatorActionIdentifier; // @synthesize automatorActionIdentifier=_automatorActionIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

