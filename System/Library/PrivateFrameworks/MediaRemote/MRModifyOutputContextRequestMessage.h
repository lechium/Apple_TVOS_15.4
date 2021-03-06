//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MRModifyOutputContextRequestMessage
{
}

- (unsigned long long)type;	// IMP=0x000000000000e41b
@property(readonly, nonatomic) NSArray *settingOutputDeviceUIDs;
@property(readonly, nonatomic) NSArray *removingOutputDeviceUIDs;
@property(readonly, nonatomic) NSArray *addingOutputDeviceUIDs;
- (unsigned int)contextType;	// IMP=0x000000000000e110
- (id)description;	// IMP=0x000000000000ddae
- (id)initWithAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 clusterAwareAddingOutputDeviceUIDs:(id)arg4 clusterAwareRemovingOutputDeviceUIDs:(id)arg5 clusterAwareSettingOutputDeviceUIDs:(id)arg6;	// IMP=0x000000000000dbcc

@end

