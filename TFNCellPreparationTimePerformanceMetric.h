//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNPerformanceMetric.h>

@class NSMutableDictionary, TFNPerformanceMeasurementAverageValue;

@interface TFNCellPreparationTimePerformanceMetric : TFNPerformanceMetric
{
    NSMutableDictionary *_operationStartTimeMap;
}

@property(readonly, nonatomic) NSMutableDictionary *operationStartTimeMap; // @synthesize operationStartTimeMap=_operationStartTimeMap;
- (void).cxx_destruct;
- (void)notifyCellPreparationDidEnd:(id)arg1;
- (id)notifyCellPreparationWillStart;
@property(readonly, nonatomic) TFNPerformanceMeasurementAverageValue *measurement;
- (id)initWithMetricIdentifier:(id)arg1 componentIdentifier:(id)arg2 metricType:(unsigned long long)arg3 measurementClasses:(id)arg4 reporter:(id)arg5 reportingInterval:(double)arg6 cachingInterval:(double)arg7;
- (id)initWithMetricIdentifier:(id)arg1 componentIdentifier:(id)arg2 reporter:(id)arg3 reportingInterval:(double)arg4 cachingInterval:(double)arg5;

@end
