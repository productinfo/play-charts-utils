//
//  SPUGalleryManagedChartViewController.h
//  ShinobiPlayChartsUtils
//
//  Created by Alison Clarke on 29/09/2014.
//
//  Copyright 2014 Scott Logic
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import "ShinobiPlayUtils/SPUGalleryManagedViewController.h"
#import <ShinobiCharts/ShinobiCharts.h>

@interface SPUGalleryManagedChartViewController : SPUGalleryManagedViewController<SChartDelegate>

@property (strong, nonatomic) IBOutlet ShinobiChart *chart;
@property (strong, nonatomic) NSObject<SChartDatasource> *dataSource;

// Dictionary mapping series indices to mutable arrays of data point indices
@property (strong, nonatomic) NSMutableDictionary *selectedDonutIndices;

// Dictionary mapping series indices to rotation angles
@property (strong, nonatomic) NSMutableDictionary *rotations;

- (void)createChart;
- (void)createDataSource;
- (void)setupChart;
- (void)setupAfterDataLoad;

@end
