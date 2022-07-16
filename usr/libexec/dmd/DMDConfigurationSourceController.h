//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATSerialOperationQueue, DMDConfigurationSourceRepresentation, DMFConfigurationSource, NSString;
@protocol DMDConfigurationSourceControllerDelegate;

@interface DMDConfigurationSourceController : NSObject
{
    id <DMDConfigurationSourceControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    CATSerialOperationQueue *_queue;	// 24 = 0x18
    DMDConfigurationSourceRepresentation *_source;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000355bb
@property(retain, nonatomic) DMDConfigurationSourceRepresentation *source; // @synthesize source=_source;
@property(retain, nonatomic) CATSerialOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak id <DMDConfigurationSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resolveAssetWithContext:(id)arg1;	// IMP=0x00100000000354bb
- (void)reportEvents;	// IMP=0x00100000000353ce
- (void)reportEventsTimeout;	// IMP=0x00100000000353bc
- (void)eventsForSourceDidChange:(id)arg1;	// IMP=0x00100000000351a9
- (void)reportStatus;	// IMP=0x00100000000350bc
- (void)reportStatusTimeout;	// IMP=0x00100000000350aa
- (void)statusForSourceDidChange:(id)arg1;	// IMP=0x0010000000034ea2
- (void)updateStatusChangeListener;	// IMP=0x0010000000034db8
@property(readonly, nonatomic) DMFConfigurationSource *configurationSource;
- (void)updateWithConfigurationSource:(id)arg1;	// IMP=0x0010000000034acb
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *organizationIdentifier;
- (id)debugDescription;	// IMP=0x001000000003498e
- (id)description;	// IMP=0x00100000000348f1
- (id)initWithConfigurationSource:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000034703

@end

