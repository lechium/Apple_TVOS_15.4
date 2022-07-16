//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGConfigurationSource-Protocol.h>

@class NSDictionary, NSString;

@interface PGDictionaryConfigurationSource : NSObject <PGConfigurationSource>
{
    NSDictionary *_configurationData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004b1d47
@property(copy, nonatomic) NSDictionary *configurationData; // @synthesize configurationData=_configurationData;
- (id)objectForKey:(id)arg1;	// IMP=0x00000000004b1d18
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000004b1cad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
