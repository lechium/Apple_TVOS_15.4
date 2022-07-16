//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFVariableSerialization-Protocol.h>

@class CLPlacemark, NSString, WFVariableString;

@interface WFLocationValue : NSObject <WFVariableSerialization>
{
    _Bool _currentLocation;	// 8 = 0x8
    NSString *_locationName;	// 16 = 0x10
    CLPlacemark *_placemark;	// 24 = 0x18
    WFVariableString *_legacyVariableString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000138ec7
@property(readonly, nonatomic) WFVariableString *legacyVariableString; // @synthesize legacyVariableString=_legacyVariableString;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(readonly, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (id)serializedRepresentation;	// IMP=0x0000000000138d50
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x0000000000138a33
- (id)initWithLegacyVariableString:(id)arg1;	// IMP=0x00000000001389b5
@property(readonly, nonatomic) NSString *defaultSearchText;
@property(readonly, nonatomic) NSString *displayString;
- (id)initWithCurrentLocation;	// IMP=0x00000000001386f9
- (id)initWithLocationName:(id)arg1 placemark:(id)arg2;	// IMP=0x0000000000138646
- (id)initWithPlacemark:(id)arg1;	// IMP=0x00000000001385c8
- (id)initWithLocationName:(id)arg1;	// IMP=0x000000000013853e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
